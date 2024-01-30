@class NSString, NSData;

@interface IDSGroupSessionConnectionParameters : NSObject

@property (copy, nonatomic) NSString *multiplexer;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long participantID;
@property (copy, nonatomic) NSData *salt;

- (id)stringRepresentation;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToGroupSessionConnectionParameters:(id)a0;
- (id)initWithStringRepresentation:(id)a0;

@end
