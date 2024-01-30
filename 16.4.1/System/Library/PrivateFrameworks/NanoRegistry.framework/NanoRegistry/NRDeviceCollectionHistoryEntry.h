@class NRDeviceCollectionDiff, NRMutableDeviceCollection, NRDeviceCollectionHistory, NRPBDeviceCollectionHistoryEntry, NSDate;

@interface NRDeviceCollectionHistoryEntry : NSObject <NSSecureCoding, NSCopying> {
    unsigned int _switchIndex;
    unsigned long long _index;
    NSDate *_date;
    NRDeviceCollectionDiff *_diff;
    NRDeviceCollectionHistory *_historyManager;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NRDeviceCollectionDiff *diff;
@property (readonly, nonatomic) NRMutableDeviceCollection *state;
@property (readonly, nonatomic) unsigned int switchIndex;
@property (readonly, nonatomic) NRPBDeviceCollectionHistoryEntry *protobuf;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithHistory:(id)a0 index:(unsigned long long)a1 date:(id)a2 diff:(id)a3 switchIndex:(unsigned int)a4;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
