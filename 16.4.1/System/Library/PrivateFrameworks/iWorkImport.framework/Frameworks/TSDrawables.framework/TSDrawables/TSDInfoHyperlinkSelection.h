@class NSSet;

@interface TSDInfoHyperlinkSelection : TSKSelection

@property (readonly, copy, nonatomic) NSSet *drawableInfos;
@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *unlockedInfos;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly, nonatomic) BOOL openInEditMode;

+ (Class)archivedSelectionClass;
+ (id)selectionWithDrawableInfos:(id)a0 openInEditMode:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithDrawableInfos:(id)a0 openInEditMode:(BOOL)a1;

@end
