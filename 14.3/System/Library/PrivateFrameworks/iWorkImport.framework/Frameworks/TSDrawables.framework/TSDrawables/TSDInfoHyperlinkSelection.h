@class NSSet;

@interface TSDInfoHyperlinkSelection : TSKSelection

@property (readonly, copy, nonatomic) NSSet *infos;
@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *unlockedInfos;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;

+ (Class)archivedSelectionClass;
+ (id)selectionWithInfos:(id)a0;

- (void).cxx_destruct;
- (id)initWithInfos:(id)a0;

@end
