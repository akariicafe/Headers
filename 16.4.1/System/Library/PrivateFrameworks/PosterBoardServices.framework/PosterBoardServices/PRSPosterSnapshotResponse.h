@class NSArray, NSString;

@interface PRSPosterSnapshotResponse : NSObject <BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSArray *snapshots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

@end
