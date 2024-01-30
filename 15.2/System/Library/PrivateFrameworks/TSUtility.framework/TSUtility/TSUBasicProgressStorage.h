@interface TSUBasicProgressStorage : NSObject

@property double value;
@property double maxValue;
@property (getter=isIndeterminate) BOOL indeterminate;

@end
