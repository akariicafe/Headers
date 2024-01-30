@class NSString;

@interface PRUIModalEntryPointResponse : NSObject <NSObject, BSXPCSecureCoding, NSCopying>

@property (readonly, nonatomic) long long result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)done;
+ (id)cancel;

@end
