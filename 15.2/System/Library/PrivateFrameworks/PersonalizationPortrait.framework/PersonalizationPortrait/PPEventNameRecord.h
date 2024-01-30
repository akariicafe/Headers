@class NSString, NSArray;

@interface PPEventNameRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) double score;
@property (nonatomic) unsigned char changeType;
@property (retain, nonatomic) NSString *eventIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSArray *participantNames;

+ (id)describeChangeType:(unsigned char)a0;
+ (id)eventNameRecordWithScore:(double)a0 eventIdentifier:(id)a1 changeType:(unsigned char)a2 title:(id)a3 location:(id)a4 participantNames:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)hasScoreSimilarToRecord:(id)a0;
- (id)initWithIdentifier:(id)a0 score:(double)a1 eventIdentifier:(id)a2 changeType:(unsigned char)a3 title:(id)a4 location:(id)a5 participantNames:(id)a6;
- (BOOL)isEqualToEventNameRecord:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
