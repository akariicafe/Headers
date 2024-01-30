@class fullPropSpec;

@interface cTableColumn : NSObject

@property (retain) fullPropSpec *propSpec;
@property unsigned int vType;
@property BOOL aggregateUsed;
@property unsigned char aggregateType;
@property BOOL valueUsed;
@property unsigned short valueOffset;
@property unsigned short valueSize;
@property BOOL statusUsed;
@property unsigned short statusOffset;
@property BOOL lengthUsed;
@property unsigned short lengthOffset;

- (void).cxx_destruct;
- (id)initWithPropertyNumber:(int)a0 WspCtx:(id)a1;

@end
