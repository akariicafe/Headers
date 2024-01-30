@class NSString, NSArray;

@interface BlastDoorGroupContext : NSObject {
    void /* unknown type, empty encoding */ groupContext;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *currentGroupName;
@property (nonatomic, readonly) BOOL has_groupParticipantVersion;
@property (nonatomic, readonly) unsigned long long groupParticipantVersion;
@property (nonatomic, readonly) BOOL has_groupProtocolVersion;
@property (nonatomic, readonly) unsigned long long groupProtocolVersion;

- (id)init;
- (void).cxx_destruct;

@end
