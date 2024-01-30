@class NSString;

@interface HFServiceNameComponents : NSObject

@property (retain, nonatomic) NSString *rawServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *rawRoomName;
@property (retain, nonatomic) NSString *roomName;
@property (nonatomic) BOOL roomNameAtEndSeparatedByWhitespace;
@property (readonly, nonatomic) NSString *composedString;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithRawServiceName:(id)a0 rawRoomName:(id)a1;

@end
