@class NSString;
@protocol HFIconDescriptor;

@interface HFActionSetBuilder : HFAbstractBaseActionSetBuilder

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isFavorite;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;

- (id)_performValidation;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)deleteActionSet;
- (id)commitItem;
- (id)_lazilyUpdateFavorite;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)_deleteActionSet:(id)a0 fromHome:(id)a1;
- (id)_lazilyUpdateIcon;

@end
