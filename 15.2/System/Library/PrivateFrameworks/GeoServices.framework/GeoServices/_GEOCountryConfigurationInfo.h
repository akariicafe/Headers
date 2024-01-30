@class NSString, NSDate;

@interface _GEOCountryConfigurationInfo : NSObject {
    unsigned int _source;
    NSString *_countryCode;
    NSDate *_dateOfLastUpdate;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
