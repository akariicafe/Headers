@class NSString, NSURL, NSDate;

@interface WFSevereWeatherEvent : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *areaName;
@property (readonly, copy, nonatomic) NSString *eventDescription;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) unsigned long long importance;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 areaName:(id)a1 eventDescription:(id)a2 source:(id)a3 expirationDate:(id)a4 URL:(id)a5 importance:(unsigned long long)a6;

@end
