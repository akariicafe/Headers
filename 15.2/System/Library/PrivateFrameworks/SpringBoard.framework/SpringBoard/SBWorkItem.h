@class NSDate;

@interface SBWorkItem : NSObject

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) id /* block */ work;

- (void).cxx_destruct;
- (id)initWithWork:(id /* block */)a0;

@end
