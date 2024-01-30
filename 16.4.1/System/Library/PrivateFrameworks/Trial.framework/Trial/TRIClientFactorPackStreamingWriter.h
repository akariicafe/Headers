@class TRIPBCodedOutputStream, NSError, NSOutputStream;

@interface TRIClientFactorPackStreamingWriter : NSObject {
    NSOutputStream *_underlying;
    TRIPBCodedOutputStream *_stream;
    NSError *_firstError;
    BOOL _hasFactorPackId;
    BOOL _hasSelectedNamespace;
}

+ (BOOL)copySourceFactorPack:(id)a0 toDestPath:(id)a1 error:(id *)a2 modifyFactorLevel:(id /* block */)a3;

- (BOOL)closeWithError:(id *)a0;
- (void)appendFactorLevel:(id)a0;
- (id)initWithPath:(id)a0;
- (void)writeSelectedNamespace:(id)a0;
- (void)writeFactorPackId:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)_fieldNumberForFieldName:(id)a0;
- (BOOL)_streamExecWithError:(id *)a0 block:(id /* block */)a1;

@end
