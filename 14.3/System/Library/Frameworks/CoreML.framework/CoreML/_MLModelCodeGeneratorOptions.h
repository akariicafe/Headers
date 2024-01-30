@interface _MLModelCodeGeneratorOptions : NSObject

@property (nonatomic) BOOL documentation;
@property (nonatomic) BOOL globalModule;
@property (nonatomic) BOOL publicAccess;
@property (nonatomic) long long container;
@property (readonly) struct SwiftCodeGeneratorOptions { BOOL documentation; BOOL globalModule; BOOL publicAccess; long long container; } cValue;

+ (id)options;

@end
