@class NSString, NSData;

@interface NLGazetteer : NSObject {
    void *_gazetteer;
}

@property (readonly, copy) NSString *language;
@property (readonly, copy) NSData *data;

+ (id)gazetteerWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)gazetteerWithData:(id)a0 error:(id *)a1;
+ (id)gazetteerWithMLModel:(id)a0 error:(id *)a1;
+ (BOOL)writeGazetteerForDictionary:(id)a0 language:(id)a1 toURL:(id)a2 error:(id *)a3;
+ (BOOL)writeGazetteerMLModelForDictionary:(id)a0 language:(id)a1 toURL:(id)a2 options:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)labels;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)modelDescription;
- (id)labelForString:(id)a0;
- (id)initWithNLModel:(id)a0 error:(id *)a1;
- (id)initWithDictionary:(id)a0 language:(id)a1 error:(id *)a2;
- (BOOL)writeMLModelToURL:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_addImplementationToArray:(struct __CFArray { } *)a0;

@end
