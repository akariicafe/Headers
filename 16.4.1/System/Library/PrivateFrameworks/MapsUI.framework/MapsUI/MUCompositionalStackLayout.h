@class MUCompositionalStackLayoutInternal, MUCompositionalStackLayoutGroup;
@protocol MULayoutItem;

@interface MUCompositionalStackLayout : MUConstraintLayout {
    MUCompositionalStackLayoutInternal *_internal;
}

@property (weak, nonatomic) id<MULayoutItem> container;
@property (copy, nonatomic) MUCompositionalStackLayoutGroup *group;

- (id)initWithContainer:(id)a0 group:(id)a1;
- (void).cxx_destruct;

@end
