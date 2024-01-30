@class NSString;
@protocol HFIconDescriptor;

@interface HFActionSetBuilder : HFAbstractBaseActionSetBuilder <HFComparable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isFavorite;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;

- (id)_performValidation;
- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)deleteActionSet;
- (id)commitItem;
- (id)compareToObject:(id)a0;
- (id)_lazilyUpdateFavorite;
- (id)_deleteActionSet:(id)a0 fromHome:(id)a1;
- (id)_lazilyUpdateIcon;

@end
