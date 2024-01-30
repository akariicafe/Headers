@class NSString, NSDate;

@interface _GEOCountryConfigurationInfo : NSObject {
    unsigned int _source;
    NSString *_countryCode;
    NSDate *_dateOfLastUpdate;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
