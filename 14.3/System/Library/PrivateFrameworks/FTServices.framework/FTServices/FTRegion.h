@class NSString, NSDictionary, NSArray;

@interface FTRegion : NSObject

@property (retain) NSDictionary *_dictionary;
@property (retain) FTRegion *_parentRegion;
@property (readonly) NSString *isoCode;
@property (readonly) NSString *label;
@property (readonly) NSString *regionID;
@property (readonly) NSString *basePhoneNumber;
@property (readonly) FTRegion *parentRegion;
@property (readonly) NSArray *subRegions;

- (id)_initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)_setParentRegion:(id)a0;
- (id)regionWithID:(id)a0;

@end
