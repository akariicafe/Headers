@class NSString, NSArray;

@interface SHSheetUIServiceClientContext : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSArray *activityConfigurations;
@property (nonatomic) BOOL isSharingExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

@end
