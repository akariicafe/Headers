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
@property (readonly, nonatomic) unsigned long long bytesFulfilledLocally;
@property (readonly, nonatomic) unsigned long long bytesResumed;
@property (readonly, copy, nonatomic) NSDictionary *totalBytesByChunkProfile;
@property (readonly, copy, nonatomic) NSDictionary *chunkCountByChunkProfile;
@property (readonly, copy, nonatomic) NSDictionary *fileCountByChunkProfile;
@property (nonatomic) BOOL walrusEnabled;
@property (nonatomic) unsigned long long zoneishKeysRolled;
@property (nonatomic) unsigned long long perRecordKeysRolled;
@property (nonatomic) unsigned long long zoneKeysRolled;
@property (nonatomic) unsigned long long shareKeysRolled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (id)initWithStartDate:(id)a0 duration:(double)a1 queueing:(double)a2 executing:(double)a3 bytesUploaded:(unsigned long long)a4 bytesDownloaded:(unsigned long long)a5 connections:(unsigned long long)a6 connectionsCreated:(unsigned long long)a7 bytesFulfilledLocally:(unsigned long long)a8 bytesResumed:(unsigned long long)a9 totalBytesByChunkProfile:(id)a10 chunkCountByChunkProfile:(id)a11 fileCountByChunkProfile:(id)a12;
- (void).cxx_destruct;

@end
