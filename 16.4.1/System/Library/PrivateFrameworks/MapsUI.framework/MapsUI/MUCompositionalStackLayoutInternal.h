@class MUCompositionalStackLayoutGroupInternal;
@protocol MULayoutItem;

@interface MUCompositionalStackLayoutInternal : MUConstraintLayoutInternal {
    void /* unknown type, empty encoding */ builder;
}

@property (nonatomic, weak) id<MULayoutItem> container;
@property (nonatomic, retain) MUCompositionalStackLayoutGroupInternal *group;

- (id)initWithContainer:(id)a0 group:(id)a1;
- (void).cxx_destruct;

@end
