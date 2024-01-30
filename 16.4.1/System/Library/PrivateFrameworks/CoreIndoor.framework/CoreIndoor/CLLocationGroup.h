@class NSString, GeographicCoordinate, ECEFCoordinate;

@interface CLLocationGroup : NSObject {
    struct unique_ptr<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>> { struct __compressed_pair<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true> *, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>> { void *__value_; } __ptr_; } vertices;
}

@property struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<unsigned long>> { unsigned long long __value_; } __pair3_; } __tree_; } wifiOnlyDownloadLocIdxs;
@property (readonly) NSString *groupId;
@property (readonly) struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } locationIds;
@property (readonly) ECEFCoordinate *centerECEF;
@property (readonly) GeographicCoordinate *centerLatLon;
@property (readonly) double tolerance;
@property (readonly) long long locationContext;

+ (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })stringVectorFromNSArray:(id)a0;
+ (void)storeAverage:(id)a0 ofVertices:(id)a1;

- (id).cxx_construct;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })getGroupId;
- (const void *)getVertices;
- (const void *)getLocationIds;
- (double)distance:(id)a0;
- (id)init;
- (BOOL)allowCellularDownload:(unsigned long long)a0;
- (id)initWithGroupId:(id)a0 locationIds:(id)a1 center:(id)a2 wifiOnlyDownloadLocIdxs:(const void *)a3 locationContext:(long long)a4 andTolerance:(double)a5;
- (void).cxx_destruct;

@end
