@interface DIIOIterator : DIIOObject

@property (nonatomic) unsigned long long attempt;
@property (readonly, nonatomic) BOOL retryIfInvalidated;

- (id)initWithIOIterator:(unsigned int)a0 retryIfInvalidated:(BOOL)a1 retain:(BOOL)a2;
- (unsigned int)copyNextObject;

@end
