@class NSNumber, NSMutableArray;

@interface IDSQRParticipantStreams : NSObject

@property (readonly) NSNumber *participantID;
@property (readonly) NSMutableArray *streamArray;
@property (readonly, nonatomic) BOOL anyParticipant;
@property (readonly, nonatomic) BOOL anyStream;

+ (id)streamWithParticipantID:(id)a0 streamArray:(id)a1 anyParticipant:(BOOL)a2 anyStream:(BOOL)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithParticipantID:(id)a0 streamArray:(id)a1 anyParticipant:(BOOL)a2 anyStream:(BOOL)a3;

@end
