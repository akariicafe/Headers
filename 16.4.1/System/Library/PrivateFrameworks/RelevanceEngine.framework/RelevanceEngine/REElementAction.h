@protocol REElementActionDelegate;

@interface REElementAction : NSObject <NSCopying, NSCoding> {
    id<REElementActionDelegate> _delegate;
}

@property (nonatomic) BOOL forceExecution;
@property (weak, nonatomic) id<REElementActionDelegate> delegate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_performWithContext:(id)a0;
- (void)_didFinish:(BOOL)a0;

@end
