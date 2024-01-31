@class NSDictionary, NSDate;

@interface CKMetric : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double queueing;
@property (readonly, nonatomic) double executing;
@property (readonly, nonatomic) unsigned long long bytesUploaded;
@property (readonly, nonatomic) unsigned long long bytesDownloaded;
@property (readonly, nonatomic) unsigned long long connections;
@property (readonly, nonatomic) unsigned long long connectionsCreated;
@property (readonly, nonatomic) unsigned long long bytesFulfilledByPeers;
@property (readonly, nonatomic) unsigned long long bytesFulfilledLocally;
@property (readonly, nonatomic) unsigned long long bytesResumed;
@property (readonly, copy, nonatomic) NSDictionary *totalBytesByChunkProfile;
@property (readonly, copy, nonatomic) NSDictionary *chunkCountByChunkProfile;
@property (readonly, copy, nonatomic) NSDictionary *fileCountByChunkProfile;
@property (readonly, nonatomic) BOOL walrusEnabled;
@property (readonly, nonatomic) unsigned long long zoneishKeysRolled;
@property (readonly, nonatomic) unsigned long long perRecordKeysRolled;
@property (readonly, nonatomic) unsigned long long zoneKeysRolled;
@property (readonly, nonatomic) unsigned long long shareKeysRolled;

- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 duration:(double)a1 queueing:(double)a2 executing:(double)a3 bytesUploaded:(unsigned long long)a4 bytesDownloaded:(unsigned long long)a5 connections:(unsigned long long)a6 connectionsCreated:(unsigned long long)a7 bytesFulfilledByPeers:(unsigned long long)a8 bytesFulfilledLocally:(unsigned long long)a9 bytesResumed:(unsigned long long)a10 totalBytesByChunkProfile:(id)a11 chunkCountByChunkProfile:(id)a12 fileCountByChunkProfile:(id)a13 walrusEnabled:(BOOL)a14 zoneishKeysRolled:(unsigned long long)a15 perRecordKeysRolled:(unsigned long long)a16 zoneKeysRolled:(unsigned long long)a17 shareKeysRolled:(unsigned long long)a18;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
