@class PBItemCollection, NSString, PBItemRepresentation, NSProgress, PBItem;

@interface PBDataTransferRequest : NSObject <NSProgressReporting>

@property (retain, nonatomic) PBItemCollection *itemCollection;
@property (retain, nonatomic) PBItem *item;
@property (retain, nonatomic) PBItemRepresentation *repr;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)typeIdentifier;
- (void).cxx_destruct;

@end
