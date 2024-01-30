@class NSString, NSNumber, Protocol;

@interface HSIORChannelDescription : NSObject <NSCopying>

@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *subGroupName;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *driverName;
@property (retain, nonatomic) NSNumber *driverIdentifier;
@property (retain, nonatomic) Protocol *reportingProtocol;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToChannelDescription:(id)a0;
- (id)initWithIOReportChannelRef:(struct __CFDictionary { } *)a0;

@end
