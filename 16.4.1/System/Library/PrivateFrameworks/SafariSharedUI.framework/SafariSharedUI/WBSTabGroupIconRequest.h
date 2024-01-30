@class NSString, NSArray;

@interface WBSTabGroupIconRequest : WBSSiteMetadataRequest <WBSIconRequest>

@property (readonly, copy, nonatomic) NSString *tabGroupUUID;
@property (readonly, copy, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeForDrawing;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
