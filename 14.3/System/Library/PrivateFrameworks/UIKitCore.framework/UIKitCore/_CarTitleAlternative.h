@class NSString;

@interface _CarTitleAlternative : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double width;

+ (id)alternativeWithTitle:(id)a0 label:(id)a1;

- (void).cxx_destruct;
- (void)updateWithLabel:(id)a0;
- (id)description;

@end
