@class NSData, NSString;

@interface _CPEngagementShareRatio : PBCodable <_CPEngagementShareRatio, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float shareOfEngagements;
@property (nonatomic) float shareOfInternetEngagements;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
