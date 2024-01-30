@class NSString, NSDate;

@interface BGTaskRequest : NSObject <NSCopying>

@property (readonly, copy) NSString *identifier;
@property (copy) NSDate *earliestBeginDate;

+ (id)_requestFromActivity:(id)a0;

- (id)_initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
