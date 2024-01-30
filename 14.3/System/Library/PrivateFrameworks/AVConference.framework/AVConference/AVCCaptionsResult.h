@class NSString, NSMutableArray;

@interface AVCCaptionsResult : NSObject

@property (readonly, nonatomic) BOOL utteranceComplete;
@property (readonly, nonatomic) NSMutableArray *tokens;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned int utteranceNumber;
@property (readonly, nonatomic) unsigned int updateNumber;

- (void)dealloc;
- (id)description;
- (id)initWithCapacity:(long long)a0 utteranceComplete:(BOOL)a1 utteranceNumber:(unsigned int)a2 updateNumber:(unsigned int)a3;
- (BOOL)addTokenWithString:(id)a0 confidence:(double)a1 spaceAfter:(BOOL)a2;

@end
