@class NSString, NSSet, NSObject;
@protocol NSCopying;

@interface _PXStoryExplicitChapter : NSObject <PXStoryChapter, PXStoryMutableChapter> {
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
}

@property (readonly, nonatomic) NSString *firstAssetUUID;
@property (readonly, nonatomic) NSSet *assetUUIDs;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (void)setLocalizedTitle:(id)a0;
- (void)setLocalizedSubtitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithFirstAssetUUID:(id)a0 assetUUIDs:(id)a1;

@end
