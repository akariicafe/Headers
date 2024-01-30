@class NSString;

@interface _MFOldIMAPOfflineOperation : NSObject

@property (nonatomic) int operationType;
@property (retain, nonatomic) NSString *mailboxName;

+ (id)_createStringFromData:(id)a0 cursor:(unsigned long long *)a1;
+ (id)deserializedCopyFromData:(id)a0 cursor:(unsigned long long *)a1;

- (void).cxx_destruct;

@end
