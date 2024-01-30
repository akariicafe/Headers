@class NSMutableArray;

@interface pidMapper : NSObject

@property (retain) NSMutableArray *pidMap;
@property (retain) NSMutableArray *columnSet;
@property unsigned int rowLength;
@property unsigned int colValueLen;
@property (retain) NSMutableArray *colTableArr;

- (void).cxx_destruct;
- (id)initWithCtx:(id)a0;

@end
