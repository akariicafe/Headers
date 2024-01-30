@class NSURL;

@interface DIAttachParams : DIBaseParams

@property (nonatomic) unsigned long long concurrency;
@property (nonatomic) unsigned long long commandSize;
@property (nonatomic) unsigned long long regEntryID;
@property (nonatomic) BOOL handleRefCount;
@property (retain, nonatomic) NSURL *inputMountedOnURL;
@property BOOL autoMount;
@property (nonatomic) long long fileMode;
@property (nonatomic) unsigned long long rawBlockSize;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)newAttachWithError:(id *)a0;
- (BOOL)reOpenIfWritableWithError:(id *)a0;

@end
