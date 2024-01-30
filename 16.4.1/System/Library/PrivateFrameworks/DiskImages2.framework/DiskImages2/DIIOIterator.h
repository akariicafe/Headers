@interface DIIOIterator : DIIOObject

@property (nonatomic) BOOL startedOver;

- (unsigned int)copyNextObject;
- (id)initWithIOIterator:(unsigned int)a0 retain:(BOOL)a1;

@end
