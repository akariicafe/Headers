@class VUITextLayout;

@interface VUIErrorLayout : TVViewLayout

@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUITextLayout *descriptionTextLayout;
@property (retain, nonatomic) VUITextLayout *debugTextLayout;
@property (retain, nonatomic) VUITextLayout *debugTextLayout2;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
