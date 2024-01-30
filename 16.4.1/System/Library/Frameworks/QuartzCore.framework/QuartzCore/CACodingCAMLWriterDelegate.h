@class NSString, NSDictionary;

@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate> {
    NSString *_resourceDir;
    int _serial;
}

@property (copy) NSString *imageFormat;
@property (copy) NSDictionary *imageEncodeOptions;
@property BOOL skipHiddenLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)CAMLWriter:(id)a0 URLForResource:(id)a1;
- (id)CAMLWriter:(id)a0 typeForObject:(id)a1;
- (BOOL)CAMLWriter:(id)a0 shouldEncodeObject:(id)a1;
- (id)initWithResourceDir:(id)a0;

@end
