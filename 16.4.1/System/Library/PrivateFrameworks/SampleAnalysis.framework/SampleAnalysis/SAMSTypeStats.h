@interface SAMSTypeStats : NSObject

@property unsigned long long count;
@property unsigned long long bytes;
@property unsigned long long num_load_infos;
@property unsigned long long num_frames;
@property unsigned long long num_duplicate;
@property unsigned long long bytes_duplicate;
@property unsigned long long num_out_of_order;
@property unsigned long long bytes_out_of_order;
@property unsigned long long num_missing_load_info;
@property unsigned long long bytes_missing_load_info;

@end
