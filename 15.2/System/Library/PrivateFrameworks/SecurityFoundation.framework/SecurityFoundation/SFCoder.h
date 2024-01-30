@class SFCodingOptions;

@interface SFCoder : NSObject {
    id _coderInternal;
}

@property (copy, nonatomic) SFCodingOptions *options;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)encodeTopLevelValue:(id)a0 error:(id *)a1;

@end
