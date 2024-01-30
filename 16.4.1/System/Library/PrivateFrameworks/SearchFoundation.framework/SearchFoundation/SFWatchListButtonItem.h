@class NSString, NSDictionary, SFWatchListItem, NSData;

@interface SFWatchListButtonItem : SFButtonItem <SFWatchListButtonItem, NSSecureCoding, NSCopying> {
    struct { unsigned char uniqueId : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFWatchListItem *watchListItem;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)hasUniqueId;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;

@end
