@class NSString;

@interface XREngineeringTypeBitpackedStructureEntry : NSObject

@property (copy, nonatomic) NSString *type;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } bitRange;

- (void).cxx_destruct;

@end
