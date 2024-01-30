@class NSArray, SALocalSearchBusiness2;

@interface SAMovieV2MovieTheater : SADomainObject

@property (retain, nonatomic) SALocalSearchBusiness2 *business;
@property (copy, nonatomic) NSArray *movies;

+ (id)movieTheater;
+ (id)movieTheaterWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
