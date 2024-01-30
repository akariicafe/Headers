@class NSArray, NSURL, NSDate;

@interface PUFeedViewControllerRestorableState : NSObject <NSCoding>

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL scrolledToNewest;
@property (copy, nonatomic) NSArray *centerAssetUUIDs;
@property (copy, nonatomic) NSArray *centerAssetFrames;
@property (copy, nonatomic) NSURL *centerSectionEntryURIRepresentation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } centerSectionFrame;
@property (nonatomic) struct CGSize { double width; double height; } collectionViewSize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
