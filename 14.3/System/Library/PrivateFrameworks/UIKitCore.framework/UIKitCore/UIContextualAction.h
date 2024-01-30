@class NSString, UIColor, UIImage;

@interface UIContextualAction : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL forcesFallbackBackgroundColor;
@property (readonly, nonatomic) BOOL isDestructive;
@property (copy, nonatomic) id /* block */ preHandler;
@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIImage *image;

+ (id)contextualActionWithStyle:(long long)a0 title:(id)a1 handler:(id /* block */)a2;

- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (void)_completeWithResult:(BOOL)a0;
- (void)executePreHandlerWithView:(id)a0;
- (void)executeHandlerWithView:(id)a0 completionHandler:(id /* block */)a1;

@end
