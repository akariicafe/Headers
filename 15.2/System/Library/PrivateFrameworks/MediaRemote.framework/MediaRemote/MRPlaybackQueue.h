@class NSString, NSArray, MRPlayerPath, NSData, NSDictionary, _MRPlaybackQueueContextProtobuf;

@interface MRPlaybackQueue : NSObject <NSCopying> {
    _MRPlaybackQueueContextProtobuf *_context;
}

@property (nonatomic) long long location;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL sendingPlaybackQueueTransaction;
@property (nonatomic) BOOL hasSendingPlaybackQueueTransaction;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *queueIdentifier;
@property (copy, nonatomic) NSArray *contentItems;
@property (copy, nonatomic) NSArray *participants;
@property (retain, nonatomic) MRPlayerPath *resolvedPlayerPath;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSArray *contentItemIdentifiers;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, copy, nonatomic) NSString *minimalReadableDescription;

- (id)initWithData:(id)a0;
- (id)description;
- (id)initWithContentItem:(id)a0;
- (id)initWithContentItems:(id)a0 location:(unsigned long long)a1;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)participantForIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentItemForIdentifier:(id)a0;
- (id)initWithContentItems:(id)a0;
- (id)contentItemWithOffset:(unsigned long long)a0;

@end
