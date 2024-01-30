@class NSArray, NSString;

@interface PXSmartAlbumPersonCondition : PXSmartAlbumCondition {
    NSArray *_personNames;
}

@property (readonly, nonatomic) NSArray *personNames;
@property (retain, nonatomic) NSString *personName;

+ (id)defaultSingleQueryForEditingContext:(id)a0;

- (void).cxx_destruct;

@end
