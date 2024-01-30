@class CHRecentCall, NSSet, NSString, NSUUID, NSDate, NSNumber;

@interface CallRecord : NSManagedObject

@property (nonatomic) unsigned int chCallStatus;
@property (readonly, nonatomic) long long chHandleType;
@property (readonly, nonatomic) CHRecentCall *chRecentCall;
@property (readonly, copy, nonatomic) NSSet *chRemoteParticipantHandles;
@property (readonly, nonatomic) BOOL supportsCallCategory;
@property (readonly, nonatomic) BOOL supportsHandleType;
@property (readonly, nonatomic) BOOL supportsLocalParticipantUUID;
@property (readonly, nonatomic) BOOL supportsOutgoingLocalParticipantUUID;
@property (readonly, nonatomic) BOOL supportsRemoteParticipantHandles;
@property (readonly, nonatomic) BOOL supportsServiceProvider;
@property (readonly, nonatomic) BOOL supportsVerificationStatus;
@property (retain, nonatomic) NSString *address;
@property (copy, nonatomic) NSNumber *answered;
@property (copy, nonatomic) NSNumber *call_category;
@property (copy, nonatomic) NSNumber *calltype;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSNumber *disconnected_cause;
@property (copy, nonatomic) NSNumber *filtered_out_reason;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *face_time_data;
@property (copy, nonatomic) NSNumber *handle_type;
@property (copy, nonatomic) NSString *iso_country_code;
@property (copy, nonatomic) NSNumber *junkConfidence;
@property (copy, nonatomic) NSUUID *localParticipantUUID;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *number_availability;
@property (copy, nonatomic) NSNumber *originated;
@property (copy, nonatomic) NSUUID *outgoingLocalParticipantUUID;
@property (copy, nonatomic) NSNumber *read;
@property (copy, nonatomic) NSString *service_provider;
@property (copy, nonatomic) NSString *unique_id;
@property (copy, nonatomic) NSNumber *verificationStatus;
@property (retain, nonatomic) NSSet *remoteParticipantHandles;

+ (id)fetchRequest;

- (id)compositeJunkConfidenceForContext:(id)a0;
- (id)compositeCallCategoryForContext:(id)a0;
- (BOOL)supportsJunkConfidence;
- (id)compositeLocalParticipantUUIDForContext:(id)a0;
- (id)compositeHandleTypeForContext:(id)a0;
- (id)compositeServiceProviderForContext:(id)a0;
- (id)compositeVerificationStatusForContext:(id)a0;
- (id)compositeOutgoingLocalParticipantUUIDForContext:(id)a0;
- (id)compositeRemoteParticipantHandlesForContext:(id)a0;

@end
