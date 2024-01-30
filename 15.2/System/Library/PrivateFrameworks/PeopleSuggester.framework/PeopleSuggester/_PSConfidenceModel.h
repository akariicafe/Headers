@class NSMutableArray;

@interface _PSConfidenceModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *circularBuffer;
@property int bufferHead;
@property double sum;
@property int bufferSize;
@property int minimumInstanceCount;

- (void)encodeWithCoder:(id)a0;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resetBuffer;
- (id)initWithBufferSize:(int)a0 sum:(double)a1 circularBuffer:(id)a2 bufferHead:(int)a3;
- (id)initWithBufferSize:(int)a0 minimumInstanceCount:(int)a1;
- (double)getConfidence;

@end
